#include "plugin.hpp"
struct Testmodule2 : Module {
	enum ParamIds {
		NUM_PARAMS
	};
	enum InputIds {
		NUM_INPUTS
	};
	enum OutputIds {
		_1_OUTPUT,
		_2_OUTPUT,
		_3_OUTPUT,
		_4_OUTPUT,
		_5_OUTPUT,
		_6_OUTPUT,
		_7_OUTPUT,
		_8_OUTPUT,
		_9_OUTPUT,
		_10_OUTPUT,
		_11_OUTPUT,
		_12_OUTPUT,
		_13_OUTPUT,
		_14_OUTPUT,
		_15_OUTPUT,
		_16_OUTPUT,
		_17_OUTPUT,
		_18_OUTPUT,
		_19_OUTPUT,
		_20_OUTPUT,
		_21_OUTPUT,
		_22_OUTPUT,
		_23_OUTPUT,
		_24_OUTPUT,
		NUM_OUTPUTS
	};
	enum LightIds {
		NUM_LIGHTS
	};

	Testmodule2() {
		config(NUM_PARAMS, NUM_INPUTS, NUM_OUTPUTS, NUM_LIGHTS);
	}

	void process(const ProcessArgs& args) override {
	}
};


struct Testmodule2Widget : ModuleWidget {
	Testmodule2Widget(Testmodule2* module) {
		setModule(module);
		setPanel(APP->window->loadSvg(asset::plugin(pluginInstance, "res/testmodule2.svg")));

		addChild(createWidget<ScrewSilver>(Vec(RACK_GRID_WIDTH, 0)));
		addChild(createWidget<ScrewSilver>(Vec(box.size.x - 2 * RACK_GRID_WIDTH, 0)));
		addChild(createWidget<ScrewSilver>(Vec(RACK_GRID_WIDTH, RACK_GRID_HEIGHT - RACK_GRID_WIDTH)));
		addChild(createWidget<ScrewSilver>(Vec(box.size.x - 2 * RACK_GRID_WIDTH, RACK_GRID_HEIGHT - RACK_GRID_WIDTH)));

		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(-35.695, -25.036)), module, Testmodule2::_1_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(-43.356, -20.539)), module, Testmodule2::_2_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(-51.008, -16.028)), module, Testmodule2::_3_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(-58.894, -11.94)), module, Testmodule2::_4_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(-93.544, -11.94)), module, Testmodule2::_5_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(-101.43, -16.029)), module, Testmodule2::_6_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(-109.082, -20.54)), module, Testmodule2::_7_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(-116.743, -25.036)), module, Testmodule2::_8_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(48.114, -129.181)), module, Testmodule2::_9_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(58.872, -129.181)), module, Testmodule2::_10_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(69.629, -129.182)), module, Testmodule2::_11_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(80.387, -129.182)), module, Testmodule2::_12_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(48.114, -23.218)), module, Testmodule2::_13_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(58.872, -23.218)), module, Testmodule2::_14_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(69.629, -23.218)), module, Testmodule2::_15_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(80.386, -23.218)), module, Testmodule2::_16_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(-35.695, -103.277)), module, Testmodule2::_17_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(-43.362, -107.777)), module, Testmodule2::_18_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(-51.016, -112.289)), module, Testmodule2::_19_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(-58.894, -116.373)), module, Testmodule2::_20_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(-93.544, -116.56)), module, Testmodule2::_21_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(-101.427, -112.473)), module, Testmodule2::_22_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(-109.078, -107.963)), module, Testmodule2::_23_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(-116.743, -103.464)), module, Testmodule2::_24_OUTPUT));
	}
};


Model* modelTestmodule2 = createModel<Testmodule2, Testmodule2Widget>("testmodule2");
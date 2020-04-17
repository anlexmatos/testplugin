#include "plugin.hpp"
struct Testmodule : Module {
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

	Testmodule() {
		config(NUM_PARAMS, NUM_INPUTS, NUM_OUTPUTS, NUM_LIGHTS);
	}

	void process(const ProcessArgs& args) override {
	}
};


struct TestmoduleWidget : ModuleWidget {
	TestmoduleWidget(Testmodule* module) {
		setModule(module);
		setPanel(APP->window->loadSvg(asset::plugin(pluginInstance, "res/testmodule.svg")));

		addChild(createWidget<ScrewSilver>(Vec(RACK_GRID_WIDTH, 0)));
		addChild(createWidget<ScrewSilver>(Vec(box.size.x - 2 * RACK_GRID_WIDTH, 0)));
		addChild(createWidget<ScrewSilver>(Vec(RACK_GRID_WIDTH, RACK_GRID_HEIGHT - RACK_GRID_WIDTH)));
		addChild(createWidget<ScrewSilver>(Vec(box.size.x - 2 * RACK_GRID_WIDTH, RACK_GRID_HEIGHT - RACK_GRID_WIDTH)));

		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(46.925, -23.89)), module, Testmodule::_1_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(39.039, -27.979)), module, Testmodule::_2_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(31.387, -32.49)), module, Testmodule::_3_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(23.726, -36.986)), module, Testmodule::_4_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(60.064, 11.287)), module, Testmodule::_5_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(70.822, 11.287)), module, Testmodule::_6_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(81.579, 11.287)), module, Testmodule::_7_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(92.337, 11.287)), module, Testmodule::_8_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(23.726, -115.414)), module, Testmodule::_9_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(31.391, -119.913)), module, Testmodule::_10_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(39.042, -124.423)), module, Testmodule::_11_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(46.925, -128.51)), module, Testmodule::_12_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(81.575, -23.89)), module, Testmodule::_13_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(89.461, -27.978)), module, Testmodule::_14_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(97.113, -32.489)), module, Testmodule::_15_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(104.774, -36.986)), module, Testmodule::_16_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(60.064, 117.251)), module, Testmodule::_17_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(70.822, 117.251)), module, Testmodule::_18_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(81.579, 117.251)), module, Testmodule::_19_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(92.336, 117.251)), module, Testmodule::_20_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(104.774, -115.227)), module, Testmodule::_21_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(97.107, -119.727)), module, Testmodule::_22_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(89.453, -124.239)), module, Testmodule::_23_OUTPUT));
		addOutput(createOutputCentered<PJ301MPort>(mm2px(Vec(81.575, -128.323)), module, Testmodule::_24_OUTPUT));
	}
};


Model* modelTestmodule = createModel<Testmodule, TestmoduleWidget>("testmodule");
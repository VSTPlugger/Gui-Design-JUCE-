/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 4.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
PluginEditor::PluginEditor ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (slider2 = new Slider ("new slider"));
    slider2->setRange (-1, 1, 0.01);
    slider2->setSliderStyle (Slider::RotaryVerticalDrag);
    slider2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider2->addListener (this);

    addAndMakeVisible (slider3 = new Slider ("new slider"));
    slider3->setRange (-1, 1, 0.01);
    slider3->setSliderStyle (Slider::RotaryVerticalDrag);
    slider3->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider3->setColour (Slider::rotarySliderFillColourId, Colour (0x7f3fcc14));
    slider3->addListener (this);

    addAndMakeVisible (slider4 = new Slider ("new slider"));
    slider4->setRange (-1, 1, 0.01);
    slider4->setSliderStyle (Slider::RotaryVerticalDrag);
    slider4->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider4->setColour (Slider::rotarySliderFillColourId, Colour (0x7fff6819));
    slider4->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

PluginEditor::~PluginEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    slider2 = nullptr;
    slider3 = nullptr;
    slider4 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void PluginEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff212121));

    g.setGradientFill (ColourGradient (Colour (0xff3fcc14),
                                       220.0f, 250.0f,
                                       Colour (0x3a0000ff),
                                       220.0f, 220.0f,
                                       true));
    g.fillRoundedRectangle (70.0f, 100.0f, 300.0f, 300.0f, 10.000f);

    g.setColour (Colours::white);
    g.setFont (Font (15.00f, Font::plain));
    g.drawText (TRANS("(Right)"),
                375, 252, 50, 25,
                Justification::centred, true);

    g.setColour (Colour (0xafff6819));
    g.fillRect (219, 100, 3, 300);

    g.setColour (Colour (0xafff6819));
    g.fillRect (70, 249, 300, 3);

    g.setColour (Colours::white);
    g.setFont (Font (15.00f, Font::plain));
    g.drawText (TRANS("X"),
                375, 228, 50, 25,
                Justification::centred, true);

    g.setColour (Colours::white);
    g.setFont (Font (15.00f, Font::plain));
    g.drawText (TRANS("(Back)"),
                195, 420, 50, 25,
                Justification::centred, true);

    g.setColour (Colours::white);
    g.setFont (Font (15.00f, Font::plain));
    g.drawText (TRANS("Y"),
                195, 396, 50, 25,
                Justification::centred, true);

    g.setColour (Colours::white);
    g.setFont (Font (15.00f, Font::plain));
    g.drawText (TRANS("(Front)"),
                195, 76, 50, 25,
                Justification::centred, true);

    g.setColour (Colours::white);
    g.setFont (Font (15.00f, Font::plain));
    g.drawText (TRANS("Y"),
                195, 52, 50, 25,
                Justification::centred, true);

    g.setColour (Colours::white);
    g.setFont (Font (15.00f, Font::plain));
    g.drawText (TRANS("(Left)"),
                15, 252, 50, 25,
                Justification::centred, true);

    g.setColour (Colours::white);
    g.setFont (Font (15.00f, Font::plain));
    g.drawText (TRANS("X"),
                15, 228, 50, 25,
                Justification::centred, true);

    g.setColour (Colours::white);
    g.setFont (Font (15.00f, Font::plain));
    g.drawText (TRANS("X"),
                500, 100, 100, 25,
                Justification::centred, true);

    g.setColour (Colours::white);
    g.setFont (Font (15.00f, Font::plain));
    g.drawText (TRANS("Y"),
                500, 200, 100, 25,
                Justification::centred, true);

    g.setColour (Colours::white);
    g.setFont (Font (15.00f, Font::plain));
    g.drawText (TRANS("Z"),
                500, 300, 100, 25,
                Justification::centred, true);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void PluginEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    slider2->setBounds (500, 125, 100, 75);
    slider3->setBounds (500, 225, 100, 75);
    slider4->setBounds (500, 325, 100, 75);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void PluginEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider2)
    {
        //[UserSliderCode_slider2] -- add your slider handling code here..
        //[/UserSliderCode_slider2]
    }
    else if (sliderThatWasMoved == slider3)
    {
        //[UserSliderCode_slider3] -- add your slider handling code here..
        //[/UserSliderCode_slider3]
    }
    else if (sliderThatWasMoved == slider4)
    {
        //[UserSliderCode_slider4] -- add your slider handling code here..
        //[/UserSliderCode_slider4]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="PluginEditor" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff212121">
    <ROUNDRECT pos="70 100 300 300" cornerSize="10" fill=" radial: 220 250, 220 220, 0=ff3fcc14, 1=3a0000ff"
               hasStroke="0"/>
    <TEXT pos="375 252 50 25" fill="solid: ffffffff" hasStroke="0" text="(Right)"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <RECT pos="219 100 3 300" fill="solid: afff6819" hasStroke="0"/>
    <RECT pos="70 249 300 3" fill="solid: afff6819" hasStroke="0"/>
    <TEXT pos="375 228 50 25" fill="solid: ffffffff" hasStroke="0" text="X"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="195 420 50 25" fill="solid: ffffffff" hasStroke="0" text="(Back)"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="195 396 50 25" fill="solid: ffffffff" hasStroke="0" text="Y"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="195 76 50 25" fill="solid: ffffffff" hasStroke="0" text="(Front)"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="195 52 50 25" fill="solid: ffffffff" hasStroke="0" text="Y"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="15 252 50 25" fill="solid: ffffffff" hasStroke="0" text="(Left)"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="15 228 50 25" fill="solid: ffffffff" hasStroke="0" text="X"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="500 100 100 25" fill="solid: ffffffff" hasStroke="0" text="X"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="500 200 100 25" fill="solid: ffffffff" hasStroke="0" text="Y"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="500 300 100 25" fill="solid: ffffffff" hasStroke="0" text="Z"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  </BACKGROUND>
  <SLIDER name="new slider" id="f8fe6a5ad40a5971" memberName="slider2"
          virtualName="" explicitFocusOrder="0" pos="500 125 100 75" min="-1"
          max="1" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="37620802c1245e7b" memberName="slider3"
          virtualName="" explicitFocusOrder="0" pos="500 225 100 75" rotarysliderfill="7f3fcc14"
          min="-1" max="1" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="e29620391f3ad81b" memberName="slider4"
          virtualName="" explicitFocusOrder="0" pos="500 325 100 75" rotarysliderfill="7fff6819"
          min="-1" max="1" int="0.01" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

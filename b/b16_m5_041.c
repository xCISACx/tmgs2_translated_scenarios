section "b16_m5_041"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XB_05_00_E02100", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Do you have something that you want\nme to do?");
    Message_MsgSel("Umm...", "Nothing.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XB_05_00_E02200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... I do, too.\nTell me next time, okay?");
        break ;
        case 1:
        Contact_SChFace(0, 0, 0);
        Voice_PlayVoice("XB_05_00_E02300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... Hmm.\nIf I can do it, I'd do anything for\nyou, so don't hesitate to tell me,\nokay?");
        break ;
        }
    Music_StopBGM(0, 40);
    }

section "b16_m7_041"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 8);
    Contact_SChFace(0, 4, 0);
    Voice_PlayVoice("XB_07_00_G02100", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Hey.\nIf you don't stop, Sensei will\ncounterattack.");
    Message_MsgSel("Okay?", "Yes～...");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 4, 1);
        Contact_SChFace(0, 0, 6);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_07_00_G02200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Come on now...\nYou understand what you can't do,\nright?");
        break ;
        case 1:
        Contact_SChFace(0, 0, 11);
        Contact_SChFace(0, 4, 0);
        Voice_PlayVoice("XB_07_00_G02300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Huh? Uh, no. It was a mere joke.\nDon't do anything.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

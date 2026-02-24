section "b16_m7_031"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Contact_SChFace(0, 4, 0);
    Voice_PlayVoice("XB_07_00_G01500", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Is it hard trying to walk so close\ntogether?");
    Message_MsgSel("Yes.", "It's not like that!");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 0);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_07_00_G01600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "We're still close together.\nWell, it can't be helped.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 11);
        Contact_SChFace(0, 4, 0);
        Voice_PlayVoice("XB_07_00_G01700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Really? Well then, you're clever...");
        break ;
        }
    Music_StopBGM(0, 40);
    }

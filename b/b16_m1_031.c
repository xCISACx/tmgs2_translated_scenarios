section "b16_m1_031"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Contact_SChFace(0, 4, 1);
    Voice_PlayVoice("XB_01_00_A01500", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Hey, oi, aren't you a little too\nclose?");
    Message_MsgSel("Yeah, maybe.", "I don't think so.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 11);
        Voice_PlayVoice("XB_01_00_A01600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "See? Right.... It's fine though.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 11);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_01_00_A01700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "So you're not too close...\nI guess that's how it is.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

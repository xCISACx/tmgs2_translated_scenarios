section "b16_m6_021"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 9);
    Voice_PlayVoice("XB_06_00_F00900", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Again...\nIs it on your mind that much?\nIt's a beauty mark.");
    Message_MsgSel("Oh, is that so?", "It's not that.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 8);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_06_00_F01000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "...\nIt's fine, because I get to dominate\nyour view.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XB_06_00_F01100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "You're terrible at lying.\nBut that seems like you, Senpai.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

section "b16_m1_012"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 8);
    Voice_PlayVoice("XB_01_00_A00600", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Hey, don't get too carried away,\nokay?");
    Message_MsgSel("Sorry...", "No way!");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 6);
        Voice_PlayVoice("XB_01_00_A00700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Eh?\nHey, I seem like the bad guy when\nyou say that...");
        break ;
        case 1:
        Contact_SChFace(0, 0, 11);
        Voice_PlayVoice("XB_01_00_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Oh, how rebellious.\nAlright then, bring it on!");
        break ;
        }
    Music_StopBGM(0, 40);
    }

section "b16_m4_025"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 2, 0);
    Contact_SChFace(0, 3, 3);
    Voice_PlayVoice("XC_04_00_D01900", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "I wanna hear your voice....\nLet me hear it.");
    Message_MsgSel("Okay, sure.", "No way!");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 2, 2);
        Contact_SChFace(0, 3, 3);
        Voice_PlayVoice("XC_04_00_D02000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Your voice was shaky.\nYou're nervous, aren't you?");
        break ;
        case 1:
        Contact_SChFace(0, 2, 1);
        Contact_SChFace(0, 3, 3);
        Voice_PlayVoice("XC_04_00_D02100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "No, I couldn't hear that....\nHurry and say something.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

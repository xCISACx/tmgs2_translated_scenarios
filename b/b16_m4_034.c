section "b16_m4_034"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XC_04_00_D02700", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Are you that interested in my rings?");
    Message_MsgSel("Yeah.", "No, I'm not.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 0);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_04_00_D02800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Well, one day... N-Nothing.");
        break ;
        case 1:
        Contact_SChFace(0, 2, 2);
        Contact_SChFace(0, 3, 3);
        Voice_PlayVoice("XC_04_00_D02900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "As if, you're really staring at\nthem.\nJust wait, I'll give you a proper\none, one day.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

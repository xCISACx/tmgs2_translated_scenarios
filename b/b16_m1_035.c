section "b16_m1_035"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 11);
    Voice_PlayVoice("XC_01_00_A03000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Hey, would you pull back if I did\nthe same thing to you?");
    Message_MsgSel("Yeah!", "... Eh?");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 6);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_01_00_A03100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I wouldn't do it, though!\nIt was just a question.\nGirls are so...");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_01_00_A03200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Idiot, I'm not gonna do it!\nAs if I would do it.... Okay?");
        break ;
        }
    Music_StopBGM(0, 40);
    }

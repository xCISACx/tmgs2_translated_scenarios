section "b16_m2_035"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XC_02_00_B03000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "We're almost at your place...");
    Message_MsgSel("Yeah...", "So?");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 0);
        Voice_PlayVoice("XC_02_00_B03100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Time flies by when I'm with you....\nJust about all the time.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XC_02_00_B03200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "We could still take the long way\nhome from here.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

section "b16_m2_025"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XC_02_00_B01900", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Are you that curious about my face?");
    Message_MsgSel("Yeah.", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XC_02_00_B02000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nI wouldn't be able to say it,\neither.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 11);
        Voice_PlayVoice("XC_02_00_B02100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I am curious about yours....\nI want to look at it forever.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

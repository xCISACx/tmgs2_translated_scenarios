section "b16_m2_023"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XC_02_00_B01300", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "... Something smells good.\nIs it you?");
    Message_MsgSel("Yeah, maybe.", "I don't think so.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XC_02_00_B01400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Now when I smell the same smell,\nI'll probably think of you right\naway.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 0);
        Voice_PlayVoice("XC_02_00_B01500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's definitely you....\nFor some reason, you've got a sweet\nair about you.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

section "b16_m2_041"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XB_02_00_B02100", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Do you have times when you can't\nsleep?");
    Message_MsgSel("Yeah...", "I don't know?");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XB_02_00_B02200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The reason is because we're\ntogether....\nIt would be nice if that was the\nreason.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 11);
        Voice_PlayVoice("XB_02_00_B02300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "So it's the same for you.\nThat's fitting of you.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

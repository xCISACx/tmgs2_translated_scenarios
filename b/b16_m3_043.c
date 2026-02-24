section "b16_m3_043"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XB_03_00_C02800", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "Hey, was Hanegasaki Academy your\nfirst choice of high schools to\nattend?");
    Message_MsgSel("Yeah, it was.", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 0);
        Voice_PlayVoice("XB_03_00_C02900", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I see.\nTo tell you the truth, I was hoping\nto get into a different school...");
        break ;
        case 1:
        Contact_SChFace(0, 2, 4);
        Contact_SChFace(0, 3, 3);
        Voice_PlayVoice("XB_03_00_C03000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Oh! Then was it perhaps...\nHabataki Academy!?");
        break ;
        }
    Music_StopBGM(0, 40);
    }

section "b16_m3_031"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XB_03_00_C01600", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "Perhaps my clothes are plain...\nDo you like this kind of clothing?");
    Message_MsgSel("Yeah, I do.", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 2, 4);
        Contact_SChFace(0, 3, 3);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_03_00_C01700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I see. I'm glad to hear that!\nThe store where I get my clothes\nfrom stock female clothes, too.\nLet's go take a look one day.");
        break ;
        case 1:
        Contact_SChFace(0, 2, 0);
        Contact_SChFace(0, 3, 3);
        Voice_PlayVoice("XB_03_00_C01800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Taste in clothing is different for\neveryone.\nBut it seems like no matter what you\nwear, you will look stylish.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

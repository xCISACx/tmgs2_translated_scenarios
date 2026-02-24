section "b16_m3_033"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 2, 2);
    Contact_SChFace(0, 3, 4);
    Contact_SChFace(0, 4, 1);
    Contact_SBlinkStart(0, 2, (#1));
    Voice_PlayVoice("XC_03_00_C02400", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "For some reason, people always have\nto seek the warmth of the person who\nthey have affection for, don't\nthey...");
    Message_MsgSel("Yeah, that's right.", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 2, 2);
        Contact_SChFace(0, 3, 3);
        Contact_SChFace(0, 4, 1);
        Contact_SBlinkStart(0, 3, (#1));
        Voice_PlayVoice("XC_03_00_C02500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You think so too............. I see.\nThat's why I feel appeased right\nnow.");
        break ;
        case 1:
        Contact_SChFace(0, 2, 4);
        Contact_SChFace(0, 3, 2);
        Voice_PlayVoice("XC_03_00_C02600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "......... You don't think so?\nBut I feel appeased at the moment.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

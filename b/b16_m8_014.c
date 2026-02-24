section "b16_m8_014"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(1, 0, 5);
    Contact_SChFace(1, 0, (#1));
    Contact_SChFace(1, 4, 0);
    Contact_SChFace(1, 4, 0);
    Voice_PlayVoice("XC_08_00_H00500", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Have you ever heard that moonlight\ncan disturb peoples' hearts?");
    Message_MsgSel("Yes.", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(1, 2, 2);
        Contact_SChFace(1, 3, 3);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XC_08_00_H00600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I'm wondering if that's why I feel\nthis way....\nYou're a sinner.");
        break ;
        case 1:
        Contact_SChFace(1, 0, 4);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XC_08_00_H00700", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Well, I'm just saying that there are\nguys who want to believe that.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

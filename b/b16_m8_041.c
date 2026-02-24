section "b16_m8_041"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(1, 0, 3);
    Contact_SChFace(1, 0, (#1));
    Contact_SChFace(1, 4, 0);
    Contact_SChFace(1, 4, 0);
    Voice_PlayVoice("XB_08_00_H02000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Is school fun?");
    Message_MsgSel("Yes.", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(1, 0, 3);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XB_08_00_H02100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Oh, you're making a \"Actually,\nsomething funny happened\" face.\nTell me about it next time.");
        break ;
        case 1:
        Contact_SChFace(1, 0, 5);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XB_08_00_H02200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "...\nWell, if there's something bothering\nyou then tell me, okay?\nI'm here to listen anytime.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

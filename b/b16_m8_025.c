section "b16_m8_025"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(1, 0, 4);
    Contact_SChFace(1, 0, (#1));
    Contact_SChFace(1, 4, 0);
    Contact_SChFace(1, 4, 0);
    Voice_PlayVoice("XC_08_00_H01600", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Speaking of which...\nHave you ever talked someone else\nabout me?");
    Message_MsgSel("Yes.", "No?");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(1, 0, 3);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XC_08_00_H01700", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I see. That makes me glad.");
        break ;
        case 1:
        Contact_SChFace(1, 0, 5);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XC_08_00_H01800", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "A secret relation, huh....\nThen should we make more of our own\nsecrets?\n... Kidding.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

section "b16_m8_022"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(1, 0, 2);
    Contact_SChFace(1, 0, (#1));
    Contact_SChFace(1, 4, 0);
    Contact_SChFace(1, 4, 0);
    Voice_PlayVoice("XB_08_00_H01100", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Worried about something?\nYou're spacing out.");
    Message_MsgSel("Yes.", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(1, 0, 5);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XB_08_00_H01200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Me too. The reason? ...\nI won't say it now.");
        break ;
        case 1:
        Contact_SChFace(1, 2, 2);
        Contact_SChFace(1, 3, 3);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XB_08_00_H01300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I see.\nThat's fine, but pretending you're\nnot is not allowed.\nOkay?");
        break ;
        }
    Music_StopBGM(0, 40);
    }

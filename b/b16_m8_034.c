section "b16_m8_034"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(1, 0, 5);
    Contact_SChFace(1, 0, (#1));
    Contact_SChFace(1, 4, 0);
    Contact_SChFace(1, 4, 0);
    Voice_PlayVoice("XC_08_00_H03000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Do you love watching me drive?");
    Message_MsgSel("Yes.", "No?");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(1, 0, 5);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XC_08_00_H03100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... This guy feels honored.\nThank you.");
        break ;
        case 1:
        Contact_SChFace(1, 0, 4);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XC_08_00_H03200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Is that right? I feel lonely now.\nHey, you should touch me.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

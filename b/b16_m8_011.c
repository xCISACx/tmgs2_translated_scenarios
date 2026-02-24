section "b16_m8_011"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(1, 0, 4);
    Contact_SChFace(1, 0, (#1));
    Contact_SChFace(1, 4, 0);
    Contact_SChFace(1, 4, 0);
    Voice_PlayVoice("XB_08_00_H00200", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Huh? Ah, my earring.\nAre you bothered by it?");
    Message_MsgSel("Yes.", "No?");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(1, 0, 3);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XB_08_00_H00300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Well then, next time we go shopping\ntogether we'll look around a bit.\nYou can choose.");
        break ;
        case 1:
        Contact_SChFace(1, 0, 3);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 1);
        Contact_SChFace(1, 4, 1);
        Voice_PlayVoice("XB_08_00_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "So were you looking at me? Ah...\nThank you.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

section "b16_m8_026"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(1, 0, 2);
    Contact_SChFace(1, 0, (#1));
    Contact_SChFace(1, 4, 0);
    Contact_SChFace(1, 4, 0);
    Voice_PlayVoice("XC_08_00_H01900", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Hey, you keep touching my cheek,\nacting on your own...\nDon't make so much fun over my age,\nokay?");
    Message_MsgSel("Understood.", "Okay～...");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(1, 0, 4);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 1);
        Contact_SChFace(1, 4, 1);
        Voice_PlayVoice("XC_08_00_H02000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "It's a joke.\nSo, don't stop, keep going.");
        break ;
        case 1:
        Contact_SChFace(1, 0, 2);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 1);
        Contact_SChFace(1, 4, 1);
        Voice_PlayVoice("XC_08_00_H02100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Seriously? Ah, well.... Okay.\nGo ahead.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

section "b16_m8_024"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(1, 2, 1);
    Contact_SChFace(1, 0, (#1));
    Contact_SChFace(1, 4, 0);
    Contact_SChFace(1, 4, 0);
    Voice_PlayVoice("XC_08_00_H01300", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "You're quieter than usual....\nAre you thinking about stuff?");
    Message_MsgSel("Yes.", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(1, 0, 3);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XC_08_00_H01400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "There's nothing to be worried about.\nI'm here, aren't I?");
        break ;
        case 1:
        Contact_SChFace(1, 0, 5);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XC_08_00_H01500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "But you were looking into the\ndistance....\nRelax, I'm by your side.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

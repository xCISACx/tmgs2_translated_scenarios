section "b16_m3_015"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 2, 3);
    Contact_SChFace(0, 3, 4);
    Contact_SChFace(0, 4, 1);
    Contact_SBlinkStart(0, 2, (#1));
    Voice_PlayVoice("XC_03_00_C00800", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "Hey, is it okay if I touch your hair\na little...?");
    Message_MsgSel("Yeah, it's fine.", "No!");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Contact_SChFace(0, 4, 1);
        Contact_SBlinkStart(0, 2, (#1));
        Voice_PlayVoice("XC_03_00_C00900", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", ".........\nWhy does it feel so comforting...?\nOh dear. I do not want to stop now.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 11);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_03_00_C01000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "S-Sorry for asking out of the blue.\nIt was so pretty, I just wanted\nto...");
        break ;
        }
    Music_StopBGM(0, 40);
    }

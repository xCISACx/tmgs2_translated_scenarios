section "b16_m2_012"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XB_02_00_B00600", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "... You sleepy?");
    Message_MsgSel("Yeah.", "I'm not.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 11);
        Voice_PlayVoice("XB_02_00_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... What an honest one.\nWe're almost at your place, so try\nto stay awake.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 11);
        Voice_PlayVoice("XB_02_00_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Ha... How obstinate.\nWell, do your best to stay awake.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

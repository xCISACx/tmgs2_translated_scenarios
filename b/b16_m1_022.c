section "b16_m1_022"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XB_01_00_A01200", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "This again...\nIs my face that beautiful or\nsomething?");
    Message_MsgSel("Yeah!", "... Eh?");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 6);
        Voice_PlayVoice("XB_01_00_A01300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "If you say something like that...\nWell, there are parts about it that\nare beautiful, right?");
        break ;
        case 1:
        Contact_SChFace(0, 0, 8);
        Voice_PlayVoice("XB_01_00_A01400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "What did you say?\nThen you're banned from touching my\nface.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

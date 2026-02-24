section "b16_m5_035"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 8);
    Voice_PlayVoice("XC_05_00_E03000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "If I put my strength into hugging\nyou, you seem like you'd break...");
    Message_MsgSel("Yeah.", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 9);
        Voice_PlayVoice("XC_05_00_E03100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "We can't just try it out, though....\nBut it seems like I'd do it one day.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 6);
        Contact_SBlinkStart(0, 2, (#1));
        Voice_PlayVoice("XC_05_00_E03200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Really? Then... should we try?\nRight here, right now.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

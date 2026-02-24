section "b16_m4_022"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 11);
    Voice_PlayVoice("XC_04_00_D03000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "...\nAren't we a little too far apart?");
    Message_MsgSel("Yeah.", "No, we're not.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XC_04_00_D03100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "If you know that then come\ncloser....\nCloser!");
        break ;
        case 1:
        Contact_SChFace(0, 0, 0);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_04_00_D03200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... As if.\nI'll come closer to you then.\nIs that okay?");
        break ;
        }
    Music_StopBGM(0, 40);
    }

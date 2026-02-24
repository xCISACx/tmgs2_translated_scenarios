section "b16_m1_042"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 8);
    Voice_PlayVoice("XB_01_00_A02400", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Hey, you...\nWhen it's just the two of us, you\ntouch me when you feel like it,\ndon't you?");
    Message_MsgSel("Yeah!", "... Eh?");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 0);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_01_00_A02500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "O-Okay.\nIt's fine, as long as you know.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 9);
        Voice_PlayVoice("XB_01_00_A02600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Aren't you touching me!?\nYou do, don't you!?\nI knew you're an indecent one.");
        break ;
        }
    Music_StopBGM(0, 40);
    }

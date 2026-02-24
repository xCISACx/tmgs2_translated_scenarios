section "b05_m1_000"{
    Background_Bg_GS2("BG_NE000_SP_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(At any rate, he's late!\nI wonder if he forgot... Ah!)");
    Message_Who(0);
    Message_MsgDisp("主人公", "(He's finally here...\nHe looks like he's walking with\nease.)");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Ah, he yawned.\nHe doesn't even show any signs of\ntrying to hurry.)");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Alright!\nI'll go hide for a bit and then\nsurprise him from behind!)");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    SoundEffect_PlayStream(2, "SS_DSE_069_000");
    Message_Who(0);
    Message_MsgDisp("主人公", "(He's here, he's here!)");
    SoundEffect_StopStream(2, 40);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Huh?)");
    Voice_PlayVoice("B0501000_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("？？？", "What seems to be the problem?\nIf you're feeling unwell, I'll call\nan ambulance!");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, no! It's nothing!\nI was just trying to scare a\nfriend--");
    Voice_PlayVoice("B0501000_A00100", #1, "");
    Message_Who(1);
    Message_MsgDisp("？？？", "Gotcha.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah.");
    Message_CloseMsg();
    if (Parameter_GetCh1Param(1, 571) == 4){
        Still_Event("EV_01_02", #1, 0, 60);
        }
    else if (Parameter_GetCh1Param(1, 571) == 6){
        Still_Event("EV_01_28", #1, 0, 60);
        }
    Screen_WipeIn(2);
    Still_StillFace(0, 6, 3);
    Still_Approach(1, 1, 1, 0, 1, 1);
    if (Parameter_GetCh1Param(1, 571) == 4){
        Still_Event("EV_01_31", #1, 1, 60);
        }
    else if (Parameter_GetCh1Param(1, 571) == 6){
        Still_Event("EV_01_32", #1, 1, 60);
        }
    System_Wait(50);
    SoundEffect_PlayStream(3, "SS_T_00_147_M00");
    Screen_WipeOut(2);
    Still_Event("");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ouch!");
    Message_CloseMsg();
    Character_Chara_GS2(1, "M1_??F", 0);
    Character_ChFace(0, 2, 1);
    Character_ChFace(0, 3, 3);
    Background_Bg_GS2("BG_NE000_SP_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0501000_A00200", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Try again in 100 years. Let's go.");
    Character_Chara_GS2(1, "NON");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Ugh...\nAs expected, it seems like\n｛Saeki＊＊｝ is one step\nahead of me.)");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 61, 6);
    Parameter_AddCh1Param(1, 60, 3);
    Parameter_AddCh1Param(1, 62, #5);
    System_GlobalWork(5, 0, 1);
    Date_DateEvent(1);
    }

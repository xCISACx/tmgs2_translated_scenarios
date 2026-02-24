section "z31_s1_001"{
    int var0;
    int var1;
    int var2;
    System_GlobalWork(0, 0, 0);
    System_GlobalWork(2, 0, 0);
    var1 = Parameter_GetPl1Param(12);
    switch (var1){
        case 0:
        Background_Bg_GS2("BG_HO200_?_0", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_0", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_0", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_0", 1, #1, 0);
        break ;
        }
    var2 = 0;
    SoundEffect_PlayStream(3, "SS_T_00_109_M00");
    System_Wait(90);
    SoundEffect_PlayStream(2, "SS_T_00_106_M00");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yuu-kun, got a minute?");
    Voice_PlayVoice("Z3114000_N00000", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Yeah, it's open.");
    Message_CloseMsg();
    Screen_WipeOut(1);
    SoundEffect_PlayStream(3, "SS_T_00_109_M00");
    Message_CloseMsg();
    Character_Chara_GS2(14, "S1_17F", 0);
    Background_Bg_GS2("BG_BH200_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_C_14_000_D00", 127, 40);
    Screen_WipeIn(1);
    if (Parameter_GetPl1Param(331) == 0){
        Voice_PlayVoice("Z3114000_N00100", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "What is it, Sis?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yuu-kun, I remember you saying you\nhear everything.\nSo you know a lot?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("Z3114000_N00200", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Uh-huh, that's right.\nDo you have something to ask?");
        Message_Who(0);
        Message_MsgDisp("主人公", "You see...");
        }
    else {
        Voice_PlayVoice("Z3114000_N00500", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "What's up?");
        Message_Who(0);
        Message_MsgDisp("主人公", "You see...");
        }
    int var3 = 0;
    while (var0 < 1){
        Message_MsgSel("Evaluation from people", "Information on friends", "Lesson on skinship");
        switch (Message_TextSelect()){
            case 0:
            var3 = 0;
            break ;
            case 1:
            var3 = 1;
            break ;
            case 2:
            var3 = 2;
            break ;
            }
        switch (var3){
            case 0:
            System_Call_GS2("Z32", "S1", 0);
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("Z3114000_N00700", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Do you have anything else to ask?");
            Message_MsgSel("Yes, I do.", "No, I don't.");
            switch (Message_TextSelect()){
                case 0:
                break ;
                case 1:
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(14, 3, (#1));
                Voice_PlayVoice("Z3114000_N00900", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Ahem, I guess knowing these things\nmakes me amazing.\nCall on me again anytime!");
                var0 = 1;
                break ;
                }
            break ;
            case 1:
            System_Call_GS2("Z33", "S1", 0);
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("Z3114000_N00700", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Do you have anything else to ask?");
            Message_MsgSel("Yes, I do.", "No, I do not.");
            switch (Message_TextSelect()){
                case 0:
                break ;
                case 1:
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(14, 3, (#1));
                Voice_PlayVoice("Z3114000_N00900", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Ahem, I guess knowing these things\nmakes me amazing.\nCall on me again anytime!");
                var0 = 1;
                break ;
                }
            break ;
            case 2:
            System_GlobalWork(0, 0, 1);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(14, 2, (#1));
            Character_ChFace(0, 3, 3);
            if (var2 == 0){
                Voice_PlayVoice("Z3114000_N00800", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Yeah, wait a sec- I'll come over\nthere.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                }
            else {
                Character_Chara_GS2(14, "NON");
                }
            System_Call_GS2("Z34", "S1", 900);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChMove(14, 0);
            var2 = 1;
            Voice_PlayVoice("Z3114000_N00700", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Do you have anything else to ask?");
            Message_MsgSel("Yes, I do.", "No, I do not.");
            switch (Message_TextSelect()){
                case 0:
                break ;
                case 1:
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(14, 3, (#1));
                Voice_PlayVoice("Z3114000_N00900", #1, "");
                Message_Who(14);
                Message_MsgDisp("Yuu", "Ahem, I guess knowing these things\nmakes me amazing.\nCall on me again anytime!");
                var0 = 1;
                break ;
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Parameter_GetPl1Param(331) < 127){
        Parameter_AddPl1Param(331, 1);
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(0, 0, 0);
    }

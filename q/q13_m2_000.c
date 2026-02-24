section "q13_m2_000"{
    int var0;
    var0 = System_Randam(0, 100);
    if (Parameter_GetCh1Param(2, 130) < 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Oh, it's ｛Shiba＊＊｝.)");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_01F", 0);
        Voice_PlayVoice("", 2, "Q0402000_B00000");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.\nWhat do you want?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hey, do you want to spend the free\nday together?");
        Character_BlinkStart(2, 3, (#1));
        Voice_PlayVoice("Q0402000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nI don't feel like visiting places\nwith anyone.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I see... Okay, I understand.\nSorry for the short notice.");
        Character_Chara_GS2(2, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Well, that was disappointing!)");
        }
    else if (Parameter_GetCh1Param(2, 130) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Oh, it's ｛Shiba＊＊｝.)");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_01F", 0);
        Voice_PlayVoice("", 2, "Q0402000_B00000");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝. What?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hey, do you want to spend the free\nday together?");
        if (var0 <= 60){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("Q0402000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "With me? Sounds good...\nI'm a curious guy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Good. Well then, let's go!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_GlobalWork(2, 2, 2);
            System_GlobalWork(0, 2, 2);
            System_Call_GS2("Q16", "M2", 0);
            System_Call_GS2("Q17", "M2", 0);
            }
        else if (var0 >= 61){
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("Q0402000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nI don't feel like visiting places\nwith anyone.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Okay, I understand.\nSorry for the short notice.");
            Character_Chara_GS2(2, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Well, that was disappointing!)");
            }
        }
    else if (Parameter_GetCh1Param(2, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Oh, it's ｛Shiba＊＊｝.)");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_01F", 0);
        Voice_PlayVoice("", 2, "Q0402000_B00300");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.\nWhat do you want?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hey, do you want to spend the free\nday together?");
        Character_BlinkStart(2, 2, (#1));
        Voice_PlayVoice("Q0402000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Yeah. Let's go.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, let's go!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_GlobalWork(2, 2, 2);
        System_GlobalWork(0, 2, 2);
        System_Call_GS2("Q16", "M2", 0);
        System_Call_GS2("Q17", "M2", 0);
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(Oh, it's ｛Shiba＊＊｝.)");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_01F", 0);
        Voice_PlayVoice("", 2, "Q0402000_B00500");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.\nWhat do you want?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Good morning!\nHey, do you want to spend the free\nday together?");
        Character_BlinkStart(2, 3, (#1));
        Voice_PlayVoice("Q0402000_B00600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nYou should have asked ahead of\ntime...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("Q0402000_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Nothing. Okay.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Good! Well then, let's go!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_GlobalWork(2, 2, 2);
        System_GlobalWork(0, 2, 2);
        System_Call_GS2("Q16", "M2", 10);
        System_Call_GS2("Q17", "M2", 0);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }

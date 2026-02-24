section "b04_m2_110"{
    int var0 = Date_GetDateOption(2, 31);
    Character_Chara_GS2(2, "M2_09F", 0);
    Background_Bg_GS2("BG_FP610_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_610_000", 127, 40);
    System_Call_GS2("B02", "M2", 10);
    if (var0 == 0){
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("B0402110_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "How good are you at swimming?");
        Message_MsgSel("If it's swimming, leave it to me!", "I'm alright at it.", "I would like you to teach me how to swim.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 4);
                Date_InData_Date(321, 1);
                Character_Chara_GS2(2, "M2_09F", 0, 1, 1, 34);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 5);
                Message_PauseSkinship();
                Voice_PlayVoice("B0402110_B00100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ehh. Then where should we go?\nThe wave pool? Or should we race?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 5);
                Voice_PlayVoice("B0402110_B00200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Doesn't seem like it to me.\nGo use a buoy, before you drown.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_09F", 0, 1, 1, 34);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402110_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Then let's start off with some light\nexercise.\nIf not, we'll get a leg cramp.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402110_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Okay.\nLet's do some warm ups first.\nI'll teach you after that.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("B0402110_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "A warm pool is a strange thing...");
        Message_MsgSel("Cold pools are better.", "This is just fine.", "It has to be hot, like a bath!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402110_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right.\nThis pool gives me a weird feeling\nwhen I dive in.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_09F", 0, 1, 1, 34);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402110_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Really?\nThe water temperature makes me feel\ntrapped, so I don't like it...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402110_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Aren't you mistaken?\nWe're at a pool.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("B0402110_B00900", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "So, where should we go first?");
        Message_MsgSel("The two-person water slide▼", "The wave pool would be nice.", "The cafeteria, I'm hungry!");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402110_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Use it by yourself.\nI'm not gonna use it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402110_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "......... That?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 2, 1);
                Voice_PlayVoice("B0402110_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Right... That......");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 2, 3);
                Voice_PlayVoice("B0402110_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Hey, to ride that, the two people\nhave to sit like that, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "I don't think that you have to...\nBut if you didn't sit like that,\nit'd be dangerous if the two people\nsplit up, right?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402110_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ah, I see.... Is it really okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah... sorry.\nIf you don't like it, then we'll do\nsomething else.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402110_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ah, no....\nI wonder what it's like...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Should we go, then?");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402110_B01600", 2, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Y-Yeah......... Alright.\nLet's go, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝?\nWhy is he psyched up...?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_09F", 0, 1, 1, 34);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402110_B01700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It might be good to be carried away\nby the waves, once in a while.\nAlright, let's go.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402110_B01800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Didn't you eat before you came here?\nEat your three meals a day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

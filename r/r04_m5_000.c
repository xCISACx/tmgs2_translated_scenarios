section "r04_m5_000"{
    int var0 = 0;
    var0 = Parameter_ExtChar(1, 6, 3, 1);
    if ((System_GlobalWork(23, 1) == 5 && var0 != 8)){
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(5, 3, (#1));
        Character_Chara_GS2(5, "M5_12F", 0);
        Voice_PlayVoice("FD_05_040_00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Merry Christmas!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.\nMerry Christmas!");
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 0);
        Character_BlinkStart(5, 2, (#1));
        Voice_PlayVoice("FD_05_040_00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Today's is the day love is gifted\nfrom me....\nI wish happiness for both you and\nthat guy.");
        }
    else if (Parameter_GetCh1Param(5, 130) <= 2){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(5, "M5_12F", 0);
        Voice_PlayVoice("R0405000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Good evening.\nAre you having a blast?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Good evening!\nIs ｛Chris＊＊｝ having fun,\ntoo?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(5, 3, (#1));
        Voice_PlayVoice("R0405000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Of course.\nI love this kind of atmosphere.\nNo wonder why my head is so hot.");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("R0405000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Your dress is nice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "T-Thank you.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 3, (#1));
            Voice_PlayVoice("R0405000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It suits you very well.\nGirls wearing dresses are definitely\ngorgeous.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_BlinkStart(5, 0, (#1));
        Voice_PlayVoice("R0405000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Oh, someone's calling me, I need to\ngo.\nWell then, later.");
        }
    else if (Parameter_GetCh1Param(5, 130) == 3){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(5, "M5_12F", 0);
        Voice_PlayVoice("", 5, "R0405000_E00500");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝.\nMerry Christmas!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.\nMerry Christmas!");
        Voice_PlayVoice("R0405000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Have you already tried the turkey?\nSeems like they're serving Christmas\npudding.");
        Message_Who(0);
        Message_MsgDisp("主人公", "No, I haven't tried, yet.");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("R0405000_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Woah, it'll be a waste not to try!\nIt's really delicious!");
        Voice_PlayVoice("R0405000_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The Christmas pudding is superb.\nIt's most likely made by a real\nmaster.");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("R0405000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You came looking stylish.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, you mean this dress?\nWhat do you think?");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("R0405000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Cute!\nYou shine the most in the crowd.");
            Message_Who(0);
            Message_MsgDisp("主人公", "You think so? Thank you.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_BlinkStart(5, 0, (#1));
        Voice_PlayVoice("R0405000_E01100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Oh, they've replenished the food.\nI'll go grab some.");
        }
    else {
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(5, "M5_12F", 0);
        Voice_PlayVoice("R0405000_E01200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Good evening. Merry Christmas.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Chris＊＊｝.\nMerry Christmas!");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("R0405000_E01300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... You're standing in a nice spot.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("R0405000_E01400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "A mistletoe is right above you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oooh. It's actually cute.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0405000_E01500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "...\nAs I thought, you don't have the\nslightest idea.");
        Message_Who(0);
        Message_MsgDisp("主人公", "What's up with it?");
        Voice_PlayVoice("R0405000_E01600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It's great, but it's a secret.");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("R0405000_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That dress.\nYou look pretty darn good.");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* Thank you.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0405000_E01800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nFor whom did you wear that dress\nfor?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("R0405000_E01900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You're so cute, I'm jealous.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 3);
        Message_Who(0);
        Message_MsgDisp("主人公", "Hey, ｛Chris＊＊｝.\nYour mistletoe story a while ago...");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("R0405000_E02000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Oh, yeah. I almost forgot.\nLet's get away from this dangerous\nspot, quick.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, why?");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("R0405000_E02100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Just listen and c'mon!");
        }
    Character_Chara_GS2(5, "NON");
    Parameter_AddCh1Param(5, 86, 1);
    if (Parameter_ChkPlayer(17) == 1){
        Parameter_AddCh1Param(5, 61, 2);
        Parameter_AddCh1Param(5, 60, 1);
        Parameter_AddCh1Param(5, 62, #2);
        }
    }

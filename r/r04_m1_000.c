section "r04_m1_000"{
    int var0 = 0;
    var0 = Parameter_ExtChar(1, 6, 3, 1);
    if ((System_GlobalWork(23, 1) == 1 && var0 != 8)){
        Character_ChFace(0, 0, 8);
        Character_Chara_GS2(1, "M1_12F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝!\nMerry Christmas!");
        Voice_PlayVoice("FD_01_040_00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Merry Christmas sounds good....\nWell, the girl decided to come, has\nshe?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("FD_01_040_00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Saying things like, \"Ah, sorry～!\"\nis suicide.\nI`ll listen to what you have to say\nlater.\nGo!");
        Character_Chara_GS2(1, "NON");
        }
    else if (Parameter_GetCh1Param(1, 130) <= 2){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_12F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("R0401000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yo, are you having fun?");
        if (Parameter_ChkPlayer(17) == 1){
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("R0401000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "That dress suits you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, really?");
            Voice_PlayVoice("R0401000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Of course.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("R0401000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Well, I will leave now.");
        Character_Chara_GS2(1, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Saeki＊＊｝'s being a\nhypocrite...\nNot everyone can be helped.)");
        }
    else if (Parameter_GetCh1Param(1, 130) == 3){
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(1, "M1_12F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝.\nMerry Christmas!");
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("R0401000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Merry Christmas.\nYou don't need to say my name so\nloudly...");
        Message_Who(0);
        Message_MsgDisp("主人公", "I see, sorry!");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("R0401000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... That dress.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, how is it?");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("R0401000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Eh? Ah, well... It suits you.\nWait, no, it doesn't.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Which one is it?");
            Character_BlinkStart(1, 3, (#1));
            Voice_PlayVoice("R0401000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... It suits you.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("R0401000_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Well, see you later, I guess?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0401000_A00900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Don't eat too much, okay?");
        Character_Chara_GS2(1, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Saeki＊＊｝'s being a\nhypocrite...\nNot everyone can help it.)");
        }
    else {
        Voice_PlayVoice("", 1, "R0401000_A01000");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.\nAs I thought, it's you...");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(1, "M1_12F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nMerry Christmas!");
        Character_ChFace(0, 0, 0);
        Voice_PlayVoice("R0401000_A01100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You're talking so loud...\nMerry Christmas.");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("R0401000_A01200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You wore a dress.\nI didn't recognize you...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Is that so? What do you think?");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("R0401000_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah... Yeah, I guess you look good?");
            Message_Who(0);
            Message_MsgDisp("主人公", "So, you don't like it very much?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("R0401000_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No... I like it very much.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("R0401000_A01500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Well, I'm leaving now.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("R0401000_A01600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Well, later.");
        Character_Chara_GS2(1, "NON");
        }
    Parameter_AddCh1Param(1, 86, 1);
    if (Parameter_ChkPlayer(17) == 1){
        Parameter_AddCh1Param(1, 61, 2);
        Parameter_AddCh1Param(1, 60, 1);
        Parameter_AddCh1Param(1, 62, #2);
        }
    }

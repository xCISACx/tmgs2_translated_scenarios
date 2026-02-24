section "r04_m6_000"{
    int var0 = 0;
    var0 = Parameter_ExtChar(1, 6, 3, 1);
    if ((System_GlobalWork(23, 1) == 6 && var0 != 8)){
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Character_BlinkStart(6, 2, (#1));
        Character_Chara_GS2(6, "M6_12F", 0);
        Voice_PlayVoice("FD_06_040_00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Hmm, lively isn't it? ...\nEspecially after I tracked down my\nfavorite person to spend time with\nthem, right?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Amachi＊＊｝!\nYou're talking really loud!!");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_BlinkStart(6, 3, (#1));
        Voice_PlayVoice("FD_06_040_00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ahahaha, sorry!\nMerry Christmas, Senpai!\nI'll fill you in on more details\nlater!");
        }
    else if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_12F", 0);
        Voice_PlayVoice("", 6, "R0406000_F00000");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Good evening, ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Amachi＊＊｝.");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0406000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wah... That dress!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, how is it?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("R0406000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's very nice.\nNo matter what Senpai wears, it\nsuits her.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("R0406000_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Well, I will leave now.");
        }
    else if (Parameter_GetCh1Param(6, 130) == 3){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(6, "M6_12F", 0);
        Voice_PlayVoice("", 6, "R0406000_F00400");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.\nMerry Christmas!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
        Voice_PlayVoice("R0406000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Hey, hey, have you tried out a dish\nfrom over there, yet?\nThey're delicious!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, really? Where at?");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("R0406000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The kinda things you say are always\nthe same....\nWell, that's fine.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0406000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I've been waiting a long time to see\nyou put on a beautiful dress.\nDon't you feel a little more like a\nlady?");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("R0406000_F00800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah, delicious!\nI'm satisfied, very satisfied!!\nSee you later.");
        }
    else {
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(6, "M6_12F", 0);
        Voice_PlayVoice("", 6, "R0406000_F00900");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.\nI was looking for you!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
        Voice_PlayVoice("R0406000_F01000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "There aren't many school events that\nI have a chance to be at with\nSenpai.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(6, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0406000_F01100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Oh, I will try my best to keep you\ncompany today!\n... Is that okay?");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("R0406000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "........");
            Message_Who(0);
            Message_MsgDisp("主人公", "What's wrong, ｛Amachi＊＊｝?");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0406000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah... No, nothing!\nThe way your dressed is different...\nI'm a little fascinated.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0406000_F01400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I really want us to be together.\nI'll eventually be free of my\ninnocence....\nBye!");
        }
    Character_Chara_GS2(6, "NON");
    Parameter_AddCh1Param(6, 86, 1);
    if (Parameter_ChkPlayer(17) == 1){
        Parameter_AddCh1Param(6, 61, 2);
        Parameter_AddCh1Param(6, 60, 1);
        Parameter_AddCh1Param(6, 62, #2);
        }
    }

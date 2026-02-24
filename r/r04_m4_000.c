section "r04_m4_000"{
    int var0 = 0;
    var0 = Parameter_ExtChar(1, 6, 3, 1);
    if ((System_GlobalWork(23, 1) == 4 && var0 != 8)){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_12F", 0);
        Voice_PlayVoice("FD_04_040_00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo....\nWill you be getting an awesome\npresent from Santa?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha.\nWhat do you think,\n｛Hariya＊＊｝?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("FD_04_040_00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "As if I'd know! ...\nI'll pray that we both get good\nstuff.\nBe grateful.");
        }
    else if (Parameter_GetCh1Param(4, 130) <= 2){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_12F", 0);
        Voice_PlayVoice("R0404000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0404000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "How are my party clothes?\nI look good, don't I?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Y-Yeah.");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0404000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\n*Sigh*");
            Message_Who(0);
            Message_MsgDisp("主人公", "What's the matter?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("R0404000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You look like you did your best\ngetting dressed for this!\nBut it's obvious that you're not\nused to wearing such clothes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("R0404000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Anyway, I'll be making my debut in\nfront of other people!\nLater!");
        }
    else if (Parameter_GetCh1Param(4, 130) == 3){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(4, "M4_12F", 0);
        Voice_PlayVoice("R0404000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Merry Christmas!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.\nMerry Christmas!");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("R0404000_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You're being greedy, again...\nCan you even eat all of that?");
        Message_Who(0);
        Message_MsgDisp("主人公", "P-Probably.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("R0404000_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You gotta eat it all or it'd be a\nwaste!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay...");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("R0404000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Hey.\nIsn't it hard in those clothes?");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, I didn't really think about it.\nWhy?");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0404000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Because you're shoving food down\nyour throat while wearing such\nclothes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh......");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("R0404000_D01000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Don't eat too much. Later!");
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(4, "M4_12F", 0);
        Voice_PlayVoice("", 4, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.\nMerry Christmas!");
        Character_BlinkStart(4, 2, (#1));
        Voice_PlayVoice("R0404000_D01100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Merry Christmas.\nDid you take a look outside?");
        Message_Who(0);
        Message_MsgDisp("主人公", "I didn't. Did something happen?");
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(4, 2, (#1));
        Voice_PlayVoice("R0404000_D01200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "People were getting excited since it\nstarted snowing.\nYou didn't notice?");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0404000_D01300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... You prefer the practical stuff?\nHaha, you definitely do!");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("R0404000_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hmm......");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hmm? What is it?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("R0404000_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "The dress suits you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Really?");
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("R0404000_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nI don't care if you don't believe\nme, but--");
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("R0404000_D01700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'm not saying it just because! ...\nI seriously think it's nice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Hariya＊＊｝...)");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(4, 2, (#1));
        Voice_PlayVoice("R0404000_D01800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "It's about time I go.\nI'll see you later.");
        }
    Character_Chara_GS2(4, "NON");
    Parameter_AddCh1Param(4, 86, 1);
    if (Parameter_ChkPlayer(17) == 1){
        Parameter_AddCh1Param(4, 61, 2);
        Parameter_AddCh1Param(4, 60, 1);
        Parameter_AddCh1Param(4, 62, #2);
        }
    }

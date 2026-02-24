section "r04_m2_000"{
    int var0 = 0;
    var0 = Parameter_ExtChar(1, 6, 3, 1);
    if ((System_GlobalWork(23, 1) == 2 && var0 != 8)){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(2, "M2_12F", 0);
        Voice_PlayVoice("FD_02_040_00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Having fun?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nYeah, I am. Are you having fun?");
        Voice_PlayVoice("FD_02_040_00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Kinda.\nIt'd be nice if good things happened\nsince it's Christmas.");
        }
    else if (Parameter_GetCh1Param(2, 130) <= 2){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_12F", 0);
        Voice_PlayVoice("R0402000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... You came.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("R0402000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Ehh.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("R0402000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Anybody can look good with the right\nclothes, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Even if you ask me that, I can't\nanswer...\nHow are my clothes?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("R0402000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... It's not bad.");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("R0402000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Later.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(He left... Well, that's that.)");
        }
    else if (Parameter_GetCh1Param(2, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nMerry Christmas!");
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(2, "M2_12F", 0);
        Voice_PlayVoice("R0402000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nSo you can say those things quite\neasily.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? What do you mean?");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("R0402000_B00600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's...\nimpossible for me to say things like\n\"Merry Christmas\".");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("R0402000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "............");
            Message_Who(0);
            Message_MsgDisp("主人公", "... What's wrong?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("R0402000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Did you rent a costume?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I d-didn't! ...\nDo I look that bad in it?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("R0402000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... No. It's nice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks.\n｛Shiba＊＊｝, you...");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("R0402000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Don't worry about me.\nI already know that I don't suit\nthese clothes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That's not true.)");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("R0402000_B01100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Later.");
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(2, "M2_12F", 0);
        Voice_PlayVoice("", 2, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("R0402000_B01300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... I was looking for you.\nHow's the party? You having fun?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.\nAre you, ｛Shiba＊＊｝?");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0402000_B01400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nBeing able to have a chat with you\nlike this is the most enjoyable\npart.");
        if (Parameter_ChkPlayer(17) == 1){
            Character_BlinkStart(2, 0, (#1));
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0402000_B01500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... That also looks nice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? Are you talking about the dress?");
            Voice_PlayVoice("R0402000_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah....\nI don't want anyone else to see you\nwearing one.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh......");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("R0402000_B01700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Kidding.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Shiba＊＊｝...)");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(0, 0, 3);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("R0402000_B01800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... I'll see you later.");
        }
    Character_Chara_GS2(2, "NON");
    Parameter_AddCh1Param(2, 86, 1);
    if (Parameter_ChkPlayer(17) == 1){
        Parameter_AddCh1Param(2, 61, 2);
        Parameter_AddCh1Param(2, 60, 1);
        Parameter_AddCh1Param(2, 62, #2);
        }
    }

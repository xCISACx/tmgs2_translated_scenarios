section "u02_g3_000"{
    if (Parameter_GetCh1Param(12, 64) == 0){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(12, "G3_04F", 0);
        Background_Bg_GS2("BG_NE100_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("U0212000_L00000", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Oh～, I'm glad!\nI'm able to get my hands on this\ncake.\nIt's like a dream come true～.");
        Message_Who(0);
        Message_MsgDisp("主人公", "That's great, ｛Nishimoto＊＊｝.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("U0212000_L00100", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "I really did get a good deal～.\nToday, I'm going to cook three\nservings of rice because of this.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Voice_PlayVoice("U0212000_L00200", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "It's donburi.\nAnd it's going to be a big one, too.\nI don't mind my weight.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(12, 3, (#1));
        Voice_PlayVoice("U0212000_L00300", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Anyway, I'm really content today!\nThank you!!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Three servings of rice...\nwith a cake?)");
        }
    else {
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(12, 2, (#1), 1);
        Character_Chara_GS2(12, "G3_04F", 0);
        Background_Bg_GS2("BG_NE100_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("U0212000_L00400", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "It's obviously saying it's sold\nout...\nOh～...");
        Message_Who(0);
        Message_MsgDisp("主人公", "That's really unfortunate...");
        Voice_PlayVoice("U0212000_L00500", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "I know! Anyway, just forget it.\nI must concentrate on what's here.");
        Voice_PlayVoice("U0212000_L00600", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "I got a raffle ticket as an apology\nfor the item being sold out!\nYou can win a ticket for a preview!");
        Message_Who(0);
        Message_MsgDisp("主人公", "*Giggles* I hope you win it!");
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 6, 2);
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 6, 2);
        }
    System_Call_GS2("U03", "G3", 0);
    }

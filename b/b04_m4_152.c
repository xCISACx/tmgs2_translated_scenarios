section "b04_m4_152"{
    int var0 = Date_GetDateOption(2, 44);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404152_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Well then, let's go!");
        Message_MsgSel("I want you to teach me how to throw darts.", "Let's compete to see who wins!", "Since we're playing, let's take it easy?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404152_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "First time on darts?\nWell, let's hit it from the\nbeginning.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404152_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, sounds good.\nLately, darts have been boring\nwithout an opponent to face.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0404152_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "No good.\nTaking darts lightly, that's not\nallowed...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404152_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Darn, I didn't quite hit a bull's\neye today...");
        Message_MsgSel("Is it because it shows your personality?", "I think it's good enough.", "Do your best and never give up.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404152_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "How's it showing!?\nI'd say, my mind and my stance are\npretty straight-forward!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404152_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I hate stopping halfway through.\nJust as long as you continue until\nthe end.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404152_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "No wonder, you think that way too?\nI'm not the type who'll dismiss it\nif it's not done thoroughly.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404152_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Your elbow angle is too weak.\nHey, it's like this. I'll show you.");
        Message_MsgSel("You fascinate me, ｛Hariya＊＊｝.", "I wish you could teach me in full detail.", "No wonder you're so good, ｛Hariya＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404152_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I know you admire me.\nThat's how cool I am!\nBut, watch the elbow, the elbow!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404152_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hey...\nWatch closely on how you throw!\nIt's no time to look at someone's\nface!");
                Message_Who(0);
                Message_MsgDisp("主人公", "I'm sorry...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404152_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Woah...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Woah?");
                Voice_PlayVoice("B0404152_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "That... It's not that bad.");
                Voice_PlayVoice("B0404152_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nAs expected, don't be so nervous,\ngive darts a chance, it'll\ndefinitely be uncool if you miss the\nthrow.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404152_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nThere's passion once you're being\nwatched, it's a fact!");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(4, 3, (#1));
                Voice_PlayVoice("B0404152_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... What am I saying? *sigh*～...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝...?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404152_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You..\nUse your mind so you can focus more\non learning!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404152_D01700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I told you, I'm good!\nDon't fall for me, okay?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

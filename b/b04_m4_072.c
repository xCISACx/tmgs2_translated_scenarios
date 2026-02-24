section "b04_m4_072"{
    int var0 = Date_GetDateOption(2, 20);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404072_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Spring's sunlight feels nice and\nwarm.");
        Message_MsgSel("Look, there's a butterfly flying!", "It seems like napping here would be nice.", "We must be wary of UV rays!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(4, 3, (#1), 1);
            Voice_PlayVoice("B0404072_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Woah, seriously!?\nI'm not into bugs and that sort of\nstuff!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404072_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Right...\nI want to lie down on the lawn and\nrelax....\nSince we're here, let's do that.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404072_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Uh-huh, we must be careful!\nEven if it is Spring, UV rays are so\nterrible.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404072_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Once you reach a place like this,\nyou're in the mood for a run, right?");
        Message_MsgSel("Well then, let's compete!", "It's the feeling of youth in the Spring!", "We can run, but no holding back, okay?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404072_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, a bold one!\nSorry, but there's no way I'm gonna\nlose!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 3);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404072_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Screaming halfway through a jump,\nit's like a complete youth drama.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404072_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'm not gonna run!\nIt was just an example! ...\nYou thought I was stupid, didn't\nyou?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 0, 3);
        Background_Bg_GS2("BG_FP220_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404072_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "When you walk while staring blankly\nat the sky, you think of different\nthings...");
        Message_MsgSel("You seem different, ｛Hariya＊＊｝?", "That cloud looks like a cotton candy!", "It makes me think I'm really small.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404072_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... What?\nAm I not supposed to think about it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404072_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "............ Is that so...?\nWhat do you think of me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "You always walk straight ahead with\nconfidence.\nYou're really shining, you know,\n｛Hariya＊＊｝?");
                Voice_PlayVoice("B0404072_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hmmm... that's how you see it.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404072_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "That's so unexpected....\nIt also makes me laugh.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really? So, your turn.\nHow do you see me?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404072_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You? ...\nA hopeless positive thinker.\nAn airheaded meddler.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Voice_PlayVoice("B0404072_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Anyway, just like this...\nOne who'll stand to give a push on\nmy back, a precious someone.");
                Voice_PlayVoice("B0404072_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Probably that part.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hariya＊＊｝...");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404072_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Well, I'm counting on you from now\non.");
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0404072_D01700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nI was thinking seriously, and you\ntalk about food...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404072_D01800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "What, you too?\nI wonder how it feels to become left\nbehind...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

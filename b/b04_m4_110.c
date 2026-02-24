section "b04_m4_110"{
    int var0 = Date_GetDateOption(2, 31);
    Character_Chara_GS2(4, "M4_09F", 0);
    Background_Bg_GS2("BG_FP610_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_610_000", 127, 40);
    System_Call_GS2("B02", "M4", 10);
    if (var0 == 0){
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("B0404110_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hey... Can you swim?");
        Message_MsgSel("If it's swimming, leave it to me!", "I'm alright at it.", "I would like you to teach me how to swim.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404110_D00100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Don't boast.\nI'm a guy who's not good at\nswimming.\n*sigh*...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 4);
                Date_InData_Date(321, 1);
                Character_Chara_GS2(4, "M4_09F", 0, 1, 1, 34);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0404110_D00200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Oh! How do you swim like that?\nIt looks perfectly balanced to me...\nGood, very good!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404110_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hmmm...\nWell, since you know how to swim,\nthere's nothing to it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404110_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "So, you too! Say so sooner～.\nWell, let's call it a day!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_ChFace(0, 0, 9);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0404110_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Ugh, I don't want to take a dip...");
        Message_MsgSel("Oh yeah, why not use a life jacket?", "Is it possible... that you can't swim?", "You'll look cool with your hair all wet.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0404110_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That's silly, I'll never use one!\n... But it was a good idea though!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404110_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ugh...... ...... Shut up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404110_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "W-Well maybe!\nIt's not like I did this so that you\nwould say that to me, I didn't do it\nfor that reason...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("B0404110_D00900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hey, does it really feel that good\nto swim?");
        Message_MsgSel("You'll stop hating it once you float.", "Maybe singing is a lot better.", "Should I teach you how to swim?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_Chara_GS2(4, "M4_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404110_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... I see, that's how it goes.\nIt indeed feels nice to swim.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_09F", 0, 1, 1, 34);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404110_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I see!\nWell, from here on we're doing\nkaraoke!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(4, 3, (#1));
                Voice_PlayVoice("B0404110_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nI said I'm not very good at\nswimming.\nI hate it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(4, 3, (#1));
                Voice_PlayVoice("B0404110_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I've made you see a lot of shameful\nstuff I've done...");
                Voice_PlayVoice("B0404110_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Even here, as well.\nUntil I can conquer it....\nYou thought I'd run away, didn't\nyou?");
                Message_Who(0);
                Message_MsgDisp("主人公", "No, that's not what I meant!");
                Message_Who(0);
                Message_MsgDisp("主人公", "It's all right,\n｛Hariya＊＊｝.\nSurely you can overcome it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "So, let's do our best?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404110_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nWhere did that baseless\nself-confidence come from?\nYou're so excited. Stupid.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Character_BlinkStart(4, 3, (#1));
                Voice_PlayVoice("B0404110_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "But, I'm also considered a fool.\nI think about it just hearing it\nfrom you.");
                Voice_PlayVoice("B0404110_D01700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "............\nWhat should we do first?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404110_D01800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "It's not \"Huh\". Swimming practice.\nYou'll be my coach, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hariya＊＊｝...");
                Voice_PlayVoice("B0404110_D01900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Don't ever let go of my hand, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

section "b04_m2_192"{
    int var0 = Date_GetDateOption(2, 62);
    Character_Chara_GS2(2, "M2_10F", 0);
    Background_Bg_GS2("BG_TR121_WI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
    if (var0 == 0){
        Voice_PlayVoice("B0402192_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The slope is steeper than I\nthought...\nWill you be okay?");
        Message_MsgSel("If it's skiing, leave it to me!", "I'm alright at it.", "I can't ski at all.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 4);
                Date_InData_Date(321, 1);
                Character_Chara_GS2(2, "M2_10F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0402192_B00100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Hmm... so you're confident.\nAlright, let's have a race down to\nthe lodge.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 2);
                Character_ChFace(1, 0, 10);
                Voice_PlayVoice("B0402192_B00200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I've got a bad feeling...... Oi.\nYour feet are shaking.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_10F", 0, 1, 1, 35);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402192_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Hmm... Then let's take it easy.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_10F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402192_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I see.\nI'll teach you a bit at the\nbeginner's course.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0402192_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hm? The tip of your nose is red.");
        Message_MsgSel("Ehehe, I'm a reindeer.", "Yours is completely red.", "Stop, don't stare at me like that.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402192_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You're not. Did you put on sunblock?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_10F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402192_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Haha, so we're matching?\nThat's not so bad.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_10F", 0, 1, 1, 35);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402192_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "O-Okay, my bad.\nIt was kinda funny, so I just\nunintentionally stared at it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0402192_B00900", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The level of difficulty might be\nhard, but do you wanna try skiing on\nthat course?");
        Message_MsgSel("It's fine... but don't leave me behind.", "Sounds fun! Yeah, let's go.", "Okay, if we skied in a lovey-dovey way▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_10F", 0, 1, 1, 35);
            Character_BlinkStart(2, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402192_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nIf it seems impossible for you, then\njust stop.\nIt's dangerous.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_10F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402192_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nI've also wondered about that place.\nIf I'm with you, it seems like it'd\nbe fun.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0402192_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nQuit it, we're going to ski\nnormally.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402192_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ski in a lovey-dovey way.........?");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402192_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Are you perhaps...\ntalking about that couple we saw\nearlier, where the guy was\nsupporting the girl from the\nback...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.\nI mean that course is impossible for\nme to do by myself...");
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402192_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "But I guess you can't enjoy that way\nof skiing, ｛Shiba＊＊｝.\nI'll just wait here.");
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402192_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... It's fine, let's go.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402192_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Let's ski together.\nYou'll be fine that way, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402192_B01800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You're the one who suggested it, so\nthere's no way I wouldn't enjoy it,\nright?");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 4, 0);
                Voice_PlayVoice("B0402192_B01900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Let's go then.");
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
    System_GlobalWork(3, 0, 1);
    System_GlobalWork(5, 0, 1);
    }

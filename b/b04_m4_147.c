section "b04_m4_147"{
    int var0 = Date_GetDateOption(2, 42);
    Background_Bg_GS2("BG_NE280_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_30_P63_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404147_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Great!\nAs expected, ad-libs are good.\nI do like it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404147_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Is that so? I had fun.\nYou'll have to listen to it\ncarefully next time.");
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
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404147_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Is it because your music sense just\ndidn't fit it?\nIt was reasonable enough for me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404147_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Jazz does have its own edge, right?\nI wonder what kind of attraction is\nthis?");
        Message_MsgSel("Jazz piano is cool.", "A soulful singing voice is wonderful.", "It doesn't compare to you.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404147_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, that fast hit and ad-libs has\nits effects.\nIt was so cool.");
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
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404147_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's filled with lots of soul!\nI'm feeling it...\nHow are they able to sing like\nthat...?!");
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
            Voice_PlayVoice("B0404147_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hey, they're pros, you know?\nI don't want to hear a straight\ncompliment.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404147_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Jazz has mood...");
        Message_MsgSel("I feel tipsy...▼", "It still doesn't suit us.", "I feel I've raised my abilities a bit.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404147_D00800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You said you feel tipsy...\nDid you drink something funny?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404147_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Haha, what, the mood?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404147_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nAs I thought, musicians are amazing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Why?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404147_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I thought so when I was looking at\nyou.\nYou had that puzzled look at first.");
                Voice_PlayVoice("B0404147_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Along with it, you had that happy\nsmile...\nYou were fascinated by it at first,\nright?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404147_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I also want to be that kind of a\nmusician.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... I seemed like I was fascinated?");
                Voice_PlayVoice("B0404147_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Oh yes............What!?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, was it wrong?");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 4);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404147_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "It's wrong!");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404147_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nIt's entirely wrong, it's not that I\ndon't get it...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Voice_PlayVoice("B0404147_D01700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Nothing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝...?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404147_D01800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Is that so?\nYour feelings will gradually change,\nright?");
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
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404147_D01900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah.\nIt's nice to listen occasionally to\nan unheard genre.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    }

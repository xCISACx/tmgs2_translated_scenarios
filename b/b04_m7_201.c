section "b04_m7_201"{
    int var0 = Date_GetDateOption(2, 15);
    Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
    Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_WF_530_000", 127, 40);
    if (var0 == 0){
        Voice_PlayVoice("B0407201_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes, everyone gather up!\nWhen you think of the ocean, you\nthink about youth dramas.\nLet's shout out what we feel!");
        Message_MsgSel("Low foolish sea---!", "I'll do my best---!", "Foolish teacher---!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 34);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407201_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "\"Low\" sounds well.\nIt's great for youth exactly!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 34);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407201_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Somehow, I don't understand, but\nlet's do our best!\nFight!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0407201_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Was that even necessary to say so\nloudly...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0407201_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes, everyone gather up～! ...\nWhat kind of research did you do?\nPlease announce it individually.");
        Message_MsgSel("I collected edible seaweed!", "I made a sand castle!", "It was windy, so I went to a tea house!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407201_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You gathered quite a lot!\nSensei will eat what you've\ncollected should he get hungry.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 34);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407201_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "An excellent castle was made.\nAnd furthermore, it's a multi-story\ncastle in the sand...\nHow fleeting.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0407201_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Well... is that so?\nEven if the wind is strong, the\nbeach is enjoyable?\nThere is a lot of discovery.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0407201_G00800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes, everyone gather up～! ...\nHere, we're observing the stratum.\nThe history of ancient times can be\nstudied.");
        Message_MsgSel("It's the tree's annual tree ring!", "There's a fossil of a beautiful shellfish!", "There is a fossil of a lost love!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 34);
            Character_BlinkStart(7, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407201_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Engraved within each layer is that\nperiod's climate features.\nYes...\nthe Earth has been around for a long\ntime.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407201_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "So that means this shellfish is not\nbroken.\nIt was at the bottom of the sea when\na layer rose a long time ago.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(7, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(7, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0407201_G01100", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Is that a TV drama?\nSensei's slightly ignorant on\nthose...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(7, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0407201_G01200", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Huh?");
                Voice_PlayVoice("B0407201_W01300", #1, "");
                Message_Who(0);
                Message_MsgDisp("Male Student A", "Oh, a melodramatic start!");
                Voice_PlayVoice("B0407201_W01400", #1, "");
                Message_Who(0);
                Message_MsgDisp("Male Student B", "Waka-chan, just go for it!");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(7, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0407201_G01500", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "It's not like that.\nSettle down, everyone.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I'm sorry for making a strange\njoke...");
                SoundEffect_PlayStream(2, "SE_NS_AL_910_003000");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(7, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0407201_G01600", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Yes, I was a little surprised....\nHowever, if the fossil were yours...");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0407201_G01700", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You had better live for new loves\nthan clinging to lost feelings....\nAm I wrong?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

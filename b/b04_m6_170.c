section "b04_m6_170"{
    int var0 = Date_GetDateOption(2, 48);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406170_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well then, what should we sing?");
            }
        else {
            Voice_PlayVoice("B0406170_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Then, what should we sing?");
            }
        Message_MsgSel("Choose your best song, ｛Amachi＊＊｝.", "Let's go for the most recently added songs!", "A duet would be nice.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406170_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Best song... I do have a lot.\nWhat should I do...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406170_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Best song?\nI wonder if it'll go well.\nWhich song should I go for?...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406170_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, I've been catching up with the\nlatest albums.\nWell... let's begin!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406170_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "All of the latest albums have\nalready been perfectly rehearsed.\nLet's start from the top.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406170_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nI'm sorry, please let me refrain\nfrom doing that...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Voice_PlayVoice("B0406170_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Hey, was that a joke?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406170_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well then, here. It's Senpai's turn!");
            }
        else {
            Voice_PlayVoice("B0406170_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well then, next is Senpai's turn!");
            }
        Message_MsgSel("Well then, the recently added ones.", "Is an anime song okay?", "Don't mind me, just sing, ｛Amachi＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406170_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Get fired up!\nShould I sing along too?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406170_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, that song.\nI've practiced it too!\nHey, may I sing along?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406170_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, sure. Put in anything, please.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406170_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, sure. Sing anything!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 2, (#1), 1);
            Character_ChFace(0, 3, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406170_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ummm...\nsinging continuously is a bit too\nmuch, my throat is getting sore.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406170_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It'll be boring if I continue\nsinging alone.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406170_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, it's already time.\nWhat song should be the last one?");
            }
        else {
            Voice_PlayVoice("B0406170_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "One more song, then it's time.\nWhat should be the last song?");
            }
        Message_MsgSel("I want to sing a ballad!", "A groovy number with you!", "Putting in any number would work!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406170_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Roger!\nPlease say what number to type.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406170_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sure. The number is?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406170_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Alright.\nLet's finish this and hit it with\nhigh fives!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406170_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, yeah!\nLet's end this and hit it with high\nfives!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406170_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "What are you going to do if it plays\na song you're not familiar with?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406170_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "No way.\nI can't sing it if it plays a song\nthat I'm not familiar with.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406170_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That sounds fun.\nSenpai, just pinpoint anything you\nlike within those pages.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... This one!");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406170_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "\"I like you, Senpai\"...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406170_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, you got it all wrong...\nThe song!\nThe title song you picked, Senpai!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah.\n｛Amachi＊＊｝, Do you know\nthis song?");
                Voice_PlayVoice("B0406170_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I... I don't know it!\nEven if I do know it, I can't sing\nit in front of Senpai...");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Amachi＊＊｝?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0406170_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I also wonder why Senpai bothered\npicking this......\n*Sigh*");
                Message_Who(0);
                Message_MsgDisp("主人公", "(What's wrong with\n｛Amachi＊＊｝?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

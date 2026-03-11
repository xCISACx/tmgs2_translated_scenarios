section "b04_m6_152"{
    int var0 = Date_GetDateOption(2, 44);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406152_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Darts is difficult, but challenging.");
            }
        else {
            Voice_PlayVoice("B0406152_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Darts is difficult, but challenging!");
            }
        Message_MsgSel("I want you to teach me how to throw darts.", "Let's compete to see who wins!", "Since we're playing, let's take it easy?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406152_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, sure.\nIt's important to know how to use\nyour elbow.\nTake a look at what I am about to\ndo.");
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
                Voice_PlayVoice("B0406152_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sure.\nSo, let's begin from the posture.\nFirst, fix the position of your\nelbow...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 1);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406152_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah!\nWell then, I'll go get the scoring\nboard.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 1);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406152_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\n*Giggles* I won't lose, you know.\nI'll go ask for the scoring board.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406152_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Take it easy...\nA match not taken seriously is\nsomething that will kill my drive...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406152_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Huh!?\nA dart match not taken seriously is\nboring!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406152_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Okay, double bulls-eye!");
            }
        else {
            Voice_PlayVoice("B0406152_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Okay, double bulls-eye!");
            }
        Message_MsgSel("You're so good, ｛Amachi＊＊｝.", "Your form is nice.", "You're having all the fun by yourself.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 1);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406152_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Even if you flatter me, I won't give\nin.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 1);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406152_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Flattering me won't do anything.\nI'm not holding back, either!");
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
                Voice_PlayVoice("B0406152_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?\nActually, it was very amazing at one\npoint and so I practiced it quite a\nlot.");
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
                Voice_PlayVoice("B0406152_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really? You think so?\nI got used to it one time and\npracticed it really hard.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406152_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Even if you say that...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406152_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...Practice makes perfect, Senpai.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406152_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Okaaay, concentrate...");
            }
        else {
            Voice_PlayVoice("B0406152_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Okaaaay, concentrate...");
            }
        Message_MsgSel("(Remain silent)", "Miss～, miss～!", "Please win my heart too▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406152_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You do know the ethics of darts.\nAs expected.");
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
                Voice_PlayVoice("B0406152_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ooh, Senpai, you do understand!\nDarts needs concentration.\nIt's proper to keep quiet.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 8);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406152_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai, that's against the rules.\nThis is a serious match.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406152_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nIf you're not quiet, I'll pinch your\nlips...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406152_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Umm... that's dangerous, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406152_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nThat's dangerous to say, don't say\nsuch things even if it's meant as a\njoke.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406152_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nWell then, I better stand in front\nof you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh...");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406152_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, I don't mind being in this\nstate....\nWherever it goes, I won't miss my\naim...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh, ummm, ｛Amachi＊＊｝...\numm...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406152_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...... Pfft.\nAhaha, you panicked too quickly,\nSenpai!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh...? ｛Amachi＊＊｝～...");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406152_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Bleh. You brought it up, Senpai.\nCheating is bad!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Character_BlinkStart(6, 0, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406152_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nHowever, I don't intend to miss it.\nSo get ready.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

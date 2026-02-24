section "b04_m6_202"{
    int var0 = Date_GetDateOption(2, 16);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406202_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "There is hardly anyone here...");
            }
        else {
            Voice_PlayVoice("B0406202_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wow... there are only a few people.");
            }
        Message_MsgSel("I feel a little sentimental.", "I wonder if there are any sea urchins...", "That lovey-dovey couple looks warm.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406202_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Because I said there was hardly\nanyone here?\nIf that's the case, I understand...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406202_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It is sentimental because there are\nonly a few people here?\n... I don't know that feeling well.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406202_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha, sea urchins?\nEven if there were it's not good to\neat them.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406202_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha, are you looking for sea\nurchins?\nEven if there were, it's not good to\neat them.");
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
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406202_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai, isn't it impolite to stare?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406202_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes Senpai, but don't stare!\nIt's already embarrassing...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(6, 3, (#1));
        Character_ChFace(0, 3, 1);
        Character_ChFace(0, 4, 1);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406202_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The wind is strong...\nUgh, it's cold!");
            }
        else {
            Voice_PlayVoice("B0406202_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "This... is definitely cold!\nThe wind is too cold!");
            }
        Message_MsgSel("Let's listen to the sounds of the sea.", "We can drink some warm coffee.", "Do you want to do Oshikura Manju?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406202_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "T-There's no room for something like\nthat...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Character_BlinkStart(6, 0, (#1));
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0406202_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's okay if Senpai's inclined to.\nBut I'm leaving!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406202_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That sounds good!\nAnd I want mine made with cocoa.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Character_ChFace(1, 4, 1);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406202_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Drinking some sounds good!\nOh, I want mine with cocoa!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_BlinkStart(6, 0, (#1), 2);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406202_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I haven't done Oshikura Manju since\nI was an elementary school student.\nI haven't heard it in a long time.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_BlinkStart(6, 0, (#1), 2);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406202_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "With just two people?...\nHowever, I do miss Oshikura Manju.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406202_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Various things are washed ashore\nfrom the sea.");
            }
        else {
            Voice_PlayVoice("B0406202_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Various things are washed ashore\nfrom the sea.");
            }
        Message_MsgSel("I don't know the types of seaweed very well.", "I will look for a bottled letter!", "Do you want to look for a whole shell?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406202_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that right?\nI wonder what they are.\nWakame seaweed?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406202_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh yes! I wonder what they are.\nWakame? Nori?");
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
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406202_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That seems to be interesting.\nIt'd be nice if you found one.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406202_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I wish we could locate one.\nI quickly looked...\nBut there doesn't seem to be one.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406202_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "A whole shell?\nAt a large place like this, it would\nsurely take very much time to find\none.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406202_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I think I'll pass on searching for\nsomething in the cold that seems to\nnormally be difficult to find.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406202_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You may look for it...\nThere are only a couple of whole\nshells in the world and you want to\nfind an exact match?");
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406202_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You'd have to be terribly lucky to\nfind something like that.");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406202_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Or something like that.\nWouldn't it be quite something,\nthough?\n...\nTo be tied together with a red\nstring...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406202_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hey, Senpai, do you want to make a\ndeal?\nIf I happen to find it, then you and\nI...");
                Message_Who(0);
                Message_MsgDisp("主人公", "What ｛Amachi＊＊｝?");
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0406202_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Senpai treats me to cocoa.\nIf I lose, I treat, Senpai.\nWell then, let's the search begin!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It seems like ｛Amachi＊＊｝\nwas about to say something else...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

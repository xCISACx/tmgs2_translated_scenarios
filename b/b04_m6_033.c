section "b04_m6_033"{
    int var0 = Date_GetDateOption(2, 6);
    if (var0 == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
            Character_ChFace(0, 0, 11);
            Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
            Voice_PlayVoice("B0406033_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "This is big...\nDrawing closer to this would startle\nyou.");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
            Character_ChFace(0, 0, 11);
            Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
            Voice_PlayVoice("B0406033_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Whoa... it's massive.\nIt looks like it's just filled with\nwhale sharks.");
            }
        Message_MsgSel("They don't feel scary, since they have love.", "It's like we'll get swallowed by them!", "It also looks tough to move them here.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 2, (#1), 1);
            Character_ChFace(0, 3, 4);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406033_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Eh... really?\nI kind of don't like them...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406033_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hmm, I don't like them.\nDon't you somehow get gossebumps\nwhen you look at them?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406033_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, they certainly are so large\nthat it seems like they could\nswallow me whole.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406033_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It seems like it'd still have room\nfor more, even if it swallowed the\nboth of us.");
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
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406033_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Moving them... here?\nRight, it must have been tough.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406033_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, it's because they're big.\nBut I do think that it'd be tough.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
            Character_ChFace(0, 0, 11);
            Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
            Voice_PlayVoice("B0406033_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It really is a large fish tank...");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
            Character_ChFace(0, 0, 11);
            Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
            Voice_PlayVoice("B0406033_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "This fish tank really is huge.");
            }
        Message_MsgSel("It looks like it feels nice being in there.", "I feel sorry that they can't come out.", "Cleaning it seems like it's tough.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 3, (#1), 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406033_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "But it is a fish tank, after all.\nI think it would be restrictive.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406033_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hmm, even if it's big, in the end,\nit's a fish tank, isn't it?\nIt'd surely be restrictive.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406033_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, I thought so too.\nIt would surely feel better in the\nocean.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406033_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, right.\nThey probably want to swim with all\ntheir might in a vast place.");
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
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406033_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I don't think that it's a problem\nthat the whale sharks have...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406033_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Maybe... Huh? Was that a joke!?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406033_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Apparently the dolphins sleep at the\nbottom of the pool.\nI wonder how the whale sharks sleep?");
            }
        else {
            Voice_PlayVoice("B0406033_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I heard the dolphins sleep at the\nbottom of a pool.\nI wonder how whale sharks sleep?");
            }
        Message_MsgSel("It looks like they don't sleep.", "Cutely, like you, ｛Amachi＊＊｝▼", "They can't close their eyes, right?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 11);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406033_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ehh...\nSo they cannot breathe if they don't\nswim.\nYou know quite a lot, Senpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 11);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406033_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ehh...\nSo they cannot breathe if they don't\nswim.\nYou're quite knowledgeable, Senpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406033_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "What do you mean by that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406033_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nSenpai, what do you mean by that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406033_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Cutely...\nBut my sisters mess with my hair\nwhen I do...!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really? How?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406033_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nLike tying a r-ribbon in it, or\narranging my hair by putting lots of\nbobby pins in it...");
                Character_BlinkStart(6, 0, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0406033_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "When I was in kindergarden, they\nmade me wear lacy pajamas...\nAh! Uhh... forget I said that!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Are there any photos?");
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406033_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "There probably are... Not!\nForget this whole conversation!\nDid you hear what I just said!?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I did. That there are photos.");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406033_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ugh...\nI'm definitely not gonna show them\nto you!\nEven if you're my senior, I'm\ndefinitely not gonna show you!");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 11);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406033_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Why is that?\nAh, they don't have eyelids!\nRight, they are fish.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 11);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406033_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Why?\nAh, they're different from dolphins,\nthey don't have eyelids!\nI see.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }

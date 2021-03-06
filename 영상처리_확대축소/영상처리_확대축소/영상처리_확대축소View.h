
// 영상처리_확대축소View.h : C영상처리_확대축소View 클래스의 인터페이스
//

#pragma once


class C영상처리_확대축소View : public CView
{
protected: // serialization에서만 만들어집니다.
	C영상처리_확대축소View();
	DECLARE_DYNCREATE(C영상처리_확대축소View)

// 특성입니다.
public:
	C영상처리_확대축소Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~C영상처리_확대축소View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOnnearest();
	afx_msg void OnBilinear();
	afx_msg void OnMedian();
};

#ifndef _DEBUG  // 영상처리_확대축소View.cpp의 디버그 버전
inline C영상처리_확대축소Doc* C영상처리_확대축소View::GetDocument() const
   { return reinterpret_cast<C영상처리_확대축소Doc*>(m_pDocument); }
#endif

